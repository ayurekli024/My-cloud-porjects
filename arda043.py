def parse_song(line):
    # code here
    song = line.split(" ")
    time = song[1].split(":")
    song_time = 60*int(time[0])+int(time[1])
    tup1 = (song[0],song_time)
    return tup1
def to_text(seconds):
    # code here
    minute = int(seconds[1]) // 60
    second = int(seconds[1]) % 60
    if second <10:
        second = "0"+str(second)
    else:
        second = str(second)
    final_time = str(minute)+":"+second
    tup2 = (seconds[0],final_time)
    return tup2 
def sort_songs(songs):
    # code here
    sorted_songs = sorted(songs,key = lambda x: x[1],reverse=True)
    return sorted_songs
# main code here
def main():
    listLength = int(input())
    list1 = []
    list2 = []
    for i in range(listLength):
        list1.append(input())
        list2.append(parse_song(list1[i]))
    list3= sort_songs(list2)
    list4 = [x[1] for x in list3 ]
    list5 = ('Total:', sum(list4))
    tup3 = to_text(list5)
    for j in range(listLength):
        list3[j] = to_text(list3[j])
    list3.append(tup3)
    for a in range(listLength+1):
        print(list3[a][0], list3[a][1])
main()