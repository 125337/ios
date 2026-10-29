@interface WCFinderLongVideoListTitleHeaderConfig : NSObject
{
    BOOL _showSepLine; // +0x8
    BOOL _showRightArrow; // +0x9
    NSString * _title; // +0x10
    NSString * _rightArrowText; // +0x18
}
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)showSepLine;
- (void)setShowSepLine:(BOOL)arg1;
- (BOOL)showRightArrow;
- (void)setShowRightArrow:(BOOL)arg1;
- (id)rightArrowText;
- (void)setRightArrowText:(id)arg1;
- (void).cxx_destruct;
@end

