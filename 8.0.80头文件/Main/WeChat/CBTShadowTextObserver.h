@interface CBTShadowTextObserver : NSObject
{
    CBTStreamMDTextView * _owner; // +0x8
}
- (id)initWithOwner:(id)arg1 textStorage:(id)arg2;
- (void)dealloc;
- (void)onTextStorageProcessedEditing:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void).cxx_destruct;
@end
