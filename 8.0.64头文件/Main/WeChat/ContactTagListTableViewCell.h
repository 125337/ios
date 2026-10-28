@interface ContactTagListTableViewCell : MMMultiMenuTableViewCell
{
    BOOL _showMemberList; // +0x40
    BOOL _showSelectControl; // +0x41
    BOOL _isSelected; // +0x42
    BOOL _isSelectDisabled; // +0x43
    BOOL _isDeselectDisabled; // +0x44
    BOOL _isSnapshotMode; // +0x45
    NSString * _tagName; // +0x48
    NSAttributedString * _attributeTagName; // +0x50
    NSString * _memberCountText; // +0x58
    NSString * _memberListText; // +0x60
    ContactTagData * _tagData; // +0x68
    MMUILabel * _titleLabel; // +0x70
    MMUILabel * _memberCountLabel; // +0x78
    MMUILabel * _detailLabel; // +0x80
    UIImageView * _selectIconView; // +0x88
    MMUIButton * _renameButton; // +0x90
    double _titleHeight; // +0x98
    double _detailHeight; // +0xa0
}
+ (double)descLabelFontSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (void)onRename;
- (void)customTableViewCellRecorderControl;
- (CGRect)getReorderControlFrame;
- (id)tagName;
- (void)setTagName:(id)arg1;
- (id)attributeTagName;
- (void)setAttributeTagName:(id)arg1;
- (id)memberCountText;
- (void)setMemberCountText:(id)arg1;
- (id)memberListText;
- (void)setMemberListText:(id)arg1;
- (BOOL)showMemberList;
- (void)setShowMemberList:(BOOL)arg1;
- (BOOL)showSelectControl;
- (void)setShowSelectControl:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isSelectDisabled;
- (void)setIsSelectDisabled:(BOOL)arg1;
- (BOOL)isDeselectDisabled;
- (void)setIsDeselectDisabled:(BOOL)arg1;
- (BOOL)isSnapshotMode;
- (void)setIsSnapshotMode:(BOOL)arg1;
- (id)tagData;
- (void)setTagData:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)memberCountLabel;
- (void)setMemberCountLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)selectIconView;
- (void)setSelectIconView:(id)arg1;
- (id)renameButton;
- (void)setRenameButton:(id)arg1;
- (double)titleHeight;
- (void)setTitleHeight:(double)arg1;
- (double)detailHeight;
- (void)setDetailHeight:(double)arg1;
- (void).cxx_destruct;
@end
