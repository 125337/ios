@interface WCPasteTextLengthLogic : MMObject
{
    unsigned long long pasteLength; // +0x8
}
- (void)textChange:(id)arg1;
- (BOOL)isPasteTooLongWithTextLength:(unsigned long long)arg1;
- (void)reset;
- (unsigned long long)pasteLength;
- (void)setPasteLength:(unsigned long long)arg1;
@end

