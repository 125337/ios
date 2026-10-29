@interface WCMusicSearchCollectionViewCell : UICollectionViewCell <IMusicPlayerExt>
{
    BOOL _isPlaying; // +0x8
    id <WCMusicSearchCollectionViewCellDelegate> _delegate; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    MMUIButton * _playButton; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _singerLabel; // +0x30
    MMUILabel * _sourceLabel; // +0x38
    UIButton * _sendButton; // +0x40
    UIView * _separatorView; // +0x48
    UIView * _selectedMaskView; // +0x50
    MMMusicInfo * _model; // +0x58
    UIView * _verticalSeperatorView; // +0x60
    UIView * _playingBackgroundView; // +0x68
    UIImageView * _playingStateImageView; // +0x70
    UIImage * _playingAnimatedImage; // +0x78
    WCMusicTypeLabel * _typeLabel; // +0x80
    CGSize _collectionViewSize; // +0x88
    CGSize _coverImageSize; // +0x98
    CGSize _playButtonSize; // +0xa8
    CGSize _previousLayoutConstrainedSize; // +0xb8
    UIEdgeInsets _contentEdgeInsets; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setupWithSearchInfo:(id)arg1;
- (void)setupWithMusicInfo:(id)arg1;
- (void)setupHighlightedTitle:(id)arg1;
- (void)setupHighlightedSubtitle:(id)arg1;
- (void)setupHighlightedText:(id)arg1 forLabel:(id)arg2;
- (void)updaetHighlightedDisplay:(BOOL)arg1;
- (void)hideSendButton;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (CGSize)applyLayout:(CGSize)arg1;
- (void)onPlayButtonClicked:(id)arg1;
- (void)onSendButtonClicked:(id)arg1;
- (id)currentThumbImage;
- (void)updatePlayButtonWithState:(unsigned long long)arg1 musicInfo:(id)arg2;
- (void)setIsPlaying:(BOOL)arg1;
- (id)coverImageView;
- (id)playButton;
- (id)titleLabel;
- (id)singerLabel;
- (id)sourceLabel;
- (id)sendButton;
- (id)separatorView;
- (id)selectedMaskView;
- (id)verticalSeperatorView;
- (id)playingBackgroundView;
- (id)playingStateImageView;
- (id)playingAnimatedImage;
- (id)typeLabel;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (BOOL)isPlaying;
- (CGSize)collectionViewSize;
- (void)setCollectionViewSize:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSingerLabel:(id)arg1;
- (void)setSourceLabel:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSelectedMaskView:(id)arg1;
- (CGSize)coverImageSize;
- (void)setCoverImageSize:(CGSize)arg1;
- (CGSize)playButtonSize;
- (void)setPlayButtonSize:(CGSize)arg1;
- (UIEdgeInsets)contentEdgeInsets;
- (void)setContentEdgeInsets:(UIEdgeInsets)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (CGSize)previousLayoutConstrainedSize;
- (void)setPreviousLayoutConstrainedSize:(CGSize)arg1;
- (void)setVerticalSeperatorView:(id)arg1;
- (void)setPlayingBackgroundView:(id)arg1;
- (void)setPlayingStateImageView:(id)arg1;
- (void)setPlayingAnimatedImage:(id)arg1;
- (void)setTypeLabel:(id)arg1;
- (void).cxx_destruct;
@end

