@interface WCTMultiSelect : WCTSelectable
{
    SyntaxList<WCTResultColumn> _resultColumns; // +0x68
}
- (id)fromTables:(id)arg1;
- (id)onResultColumns:(const void *)arg1;
- (id)firstMultiObject;
- (id)allMultiObjects;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

