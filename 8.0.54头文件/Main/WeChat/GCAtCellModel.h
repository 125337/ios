@interface GCAtCellModel : GCBaseCellModel
{
    BOOL _selected; // +0x8
    BOOL _showSeperatedLineInLeft; // +0x9
    NSString * _headUrl; // +0x10
    NSString * _nickName; // +0x18
    NSString * _subTitle; // +0x20
    NSString * _userId; // +0x28
}
- (Class)bindCellClass;
- (double)cellHeight;
- (void)setShowSeperatedLineInLeft:(BOOL)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)userId;
- (void)setUserId:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)showSeperatedLineInLeft;
- (void).cxx_destruct;
@end

