@interface _NoteParserDownloadSlot : NSObject
{
    int _retCode; // +0x8
    NSObject<OS_dispatch_semaphore> * _sem; // +0x10
}
- (id)sem;
- (void)setSem:(id)arg1;
- (int)retCode;
- (void)setRetCode:(int)arg1;
- (void).cxx_destruct;
@end
