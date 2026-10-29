@interface MMImagePickerReportGesture : NSObject
{
    BOOL _ended; // +0x8
    BOOL _changed; // +0x9
    BOOL _reported; // +0xa
    unsigned long long _pendingCount; // +0x10
    NSDictionary * _params; // +0x18
    NSMutableDictionary * _selectionTypes; // +0x20
}
- (unsigned long long)pendingCount;
- (void)setPendingCount:(unsigned long long)arg1;
- (BOOL)ended;
- (void)setEnded:(BOOL)arg1;
- (BOOL)changed;
- (void)setChanged:(BOOL)arg1;
- (BOOL)reported;
- (void)setReported:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)selectionTypes;
- (void)setSelectionTypes:(id)arg1;
- (void).cxx_destruct;
@end
