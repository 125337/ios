@interface MMListReportManager : NSObject
{
    id <MMListReportManagerDelegate> _delegate; // +0x8
    NSMutableDictionary * _exposedSet; // +0x10
    MMTListAdapter * _adapter; // +0x18
    double _keyboardHeight; // +0x20
}
- (id)initWithAdapter:(id)arg1;
- (void)listDidDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 sectionController:(id)arg3;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)tryExposeItem:(id)arg1 inSectionController:(id)arg2 indexPath:(id)arg3;
- (void)clearCache;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)exposedSet;
- (void)setExposedSet:(id)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end

