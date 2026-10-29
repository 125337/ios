@interface MMLiveAudioRoomSubTitleLineView : UIView
{
    MMWebImageView * _avatarImageView; // +0x8
    MMUILabel * _contentLabel; // +0x10
    MMLiveAudioRoomSubTitleLineDataInfo * _currentDataInfo; // +0x18
}
+ (id)nicknameFont;
+ (id)nicknameColor;
+ (id)contentFont;
+ (id)contentColor;
+ (id)buildAttributedStringForNickname:(id)arg1 content:(id)arg2;
+ (double)labelMaxWidthForDataInfo:(id)arg1 width:(double)arg2;
+ (CGSize)labelSizeForDataInfo:(id)arg1 width:(double)arg2;
+ (double)heightForDataInfo:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithDataInfo:(id)arg1;
- (void)layoutSubviews;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)currentDataInfo;
- (void)setCurrentDataInfo:(id)arg1;
- (void).cxx_destruct;
@end
