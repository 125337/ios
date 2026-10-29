@interface MMBGMSelectedTabTableViewCell : MMBGMSelectedTabTableBaseCell
{
    BOOL _isCellSelected; // +0x8
    BOOL _isPlayable; // +0x9
    MMWebImageView * _coverView; // +0x10
    UILabel * _songNameLabel; // +0x18
    UILabel * _authorNameLabel; // +0x20
    UILabel * _songDurationLabel; // +0x28
    UIView * _separatorLine; // +0x30
    UIView * _coverMaskView; // +0x38
    PAGView * _pagView; // +0x40
    MMBGMSelectedTabTableViewCellConfig * _config; // +0x48
    id <MMBGMSelectedMusicDataProtocol> _musicData; // +0x50
}
+ (id)cellID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)setIsCellSelected:(BOOL)arg1;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2;
- (BOOL)isPlayable;
- (void)layoutSubviews;
- (id)getMusicId;
- (id)getMusicInfo;
- (BOOL)isCellSelected;
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
- (void)setIsPlayable:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)musicData;
- (void)setMusicData:(id)arg1;
- (void).cxx_destruct;
@end

