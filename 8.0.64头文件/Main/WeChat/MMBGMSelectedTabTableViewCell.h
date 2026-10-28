@interface MMBGMSelectedTabTableViewCell : MMBGMSelectedTabTableBaseCell
{
    id <MMBGMSelectedTabTableViewCellDelegate> _bgmSelectedCellDelegate; // +0x8
    MMWebImageView * _coverView; // +0x10
    UILabel * _songNameLabel; // +0x18
    UILabel * _authorNameLabel; // +0x20
    UILabel * _songDurationLabel; // +0x28
    UIView * _separatorLine; // +0x30
    UIView * _coverMaskView; // +0x38
    PAGView * _pagView; // +0x40
    UIImageView * _checkImageView; // +0x48
    MMUIButton * _editBgmButton; // +0x50
}
+ (id)cellID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)setIsCellSelected:(BOOL)arg1;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2 globalConfig:(id)arg3;
- (void)layoutSubviews;
- (void)onClickEditBgmButton:(id)arg1;
- (id)bgmSelectedCellDelegate;
- (void)setBgmSelectedCellDelegate:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)songNameLabel;
- (void)setSongNameLabel:(id)arg1;
- (id)authorNameLabel;
- (void)setAuthorNameLabel:(id)arg1;
- (id)songDurationLabel;
- (void)setSongDurationLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)coverMaskView;
- (void)setCoverMaskView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)checkImageView;
- (void)setCheckImageView:(id)arg1;
- (id)editBgmButton;
- (void)setEditBgmButton:(id)arg1;
- (void).cxx_destruct;
@end
