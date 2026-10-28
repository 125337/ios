@interface WCTSelect : WCTSelectable
{
    SyntaxList<WCTResultColumn> _resultColumns; // +0x68
    Class m_class; // +0x88
}
- (void)willPrepare:(void *)arg1;
- (id)fromTable:(id)arg1;
- (id)onResultColumns:(const void *)arg1;
- (id)ofClass:(Class)arg1;
- (id)allObjects;
- (id)firstObject;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
