@interface MMFinderLiveKTVSongResourceParseResult : NSObject
{
    NSArray * _sentenceList; // +0x8
    NSArray * _sentenceTimeList; // +0x10
    NSData * _noteData; // +0x18
    NSString * _songPath; // +0x20
}
- (id)sentenceList;
- (void)setSentenceList:(id)arg1;
- (id)sentenceTimeList;
- (void)setSentenceTimeList:(id)arg1;
- (id)noteData;
- (void)setNoteData:(id)arg1;
- (id)songPath;
- (void)setSongPath:(id)arg1;
- (void).cxx_destruct;
@end

