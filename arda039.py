
def parse_song(line):
	list1 = line.split(" ")
	list2 = list1[1].split(":")
	seconds = (60*int(list2[0]))+int(list2[1])
	tuple1 = (list1[0],seconds)
	return tuple1
def to_text(seconds):
# code here
	minute = str(seconds // 60)
	second = str(seconds %60)
	if len(second) == 1:
		sec = 0+sec
	time = (minute+":"+second)
	return time
def sort_songs(songs):
	sorted_songs = sorted(songs, key=lambda x: x[1], reverse=True)
	return sorted_songs
# main code here
	


def main():
	listLength = int(input())
	songList = []
	parsedSongList = []
	for i in range(0,listLength):
		songList.append(input())
	for n in range(len(songList)):
		parsedSongList = parse_song(songList[n])
	latestList = sort_songs(parsedSongList)
	for j in range(len(latestList)):
		latestList[j,1] = to_text(latestList)
	
	print(latestList)	
	
	
main()	
