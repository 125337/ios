@interface TSKMidiParam : NSObject
{
    NSData * _noteData; // +0x8
    NSArray * _sentenceArray; // +0x10
}
- (id)noteData;
- (void)setNoteData:(id)arg1;
- (id)sentenceArray;
- (void)setSentenceArray:(id)arg1;
- (void).cxx_destruct;
@end

