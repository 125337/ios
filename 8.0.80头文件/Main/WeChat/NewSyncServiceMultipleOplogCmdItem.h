@interface NewSyncServiceMultipleOplogCmdItem : NSObject
{
    unsigned int _uiCmdID; // +0x8
    NSData * _dtInput; // +0x10
}
- (unsigned int)uiCmdID;
- (void)setUiCmdID:(unsigned int)arg1;
- (id)dtInput;
- (void)setDtInput:(id)arg1;
- (void).cxx_destruct;
@end
