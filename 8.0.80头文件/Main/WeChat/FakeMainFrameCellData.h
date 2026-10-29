@interface FakeMainFrameCellData : NSObject <PBCoding>
{
    BOOL _bNormalCell; // +0x8
    BOOL _bTopCell; // +0x9
    NSString * _userName; // +0x10
    NSString * _textForNameLabel; // +0x18
    NSString * _textForTimeLabel; // +0x20
    NSString * _textForMessageLabel; // +0x28
    double _widthForNameLabel; // +0x30
}
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_textForNameLabel;
+ (void)PBArrayAdd_textForTimeLabel;
+ (void)PBArrayAdd_textForMessageLabel;
+ (void)PBArrayAdd_widthForNameLabel;
+ (void)PBArrayAdd_bNormalCell;
+ (void)PBArrayAdd_bTopCell;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)textForNameLabel;
- (void)setTextForNameLabel:(id)arg1;
- (id)textForTimeLabel;
- (void)setTextForTimeLabel:(id)arg1;
- (id)textForMessageLabel;
- (void)setTextForMessageLabel:(id)arg1;
- (double)widthForNameLabel;
- (void)setWidthForNameLabel:(double)arg1;
- (BOOL)bNormalCell;
- (void)setBNormalCell:(BOOL)arg1;
- (BOOL)bTopCell;
- (void)setBTopCell:(BOOL)arg1;
- (void).cxx_destruct;
@end
