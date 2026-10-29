@interface BTMinimizeSnapshotView : MMUIView
{
    BOOL _isShowLargeCover; // +0x8
    unsigned int _itemShowType; // +0xc
    RichTextView * _richTextView; // +0x10
    MMWebImageView * _headImageView; // +0x18
    MMUILabel * _nickNameLabel; // +0x20
    MMWebImageView * _coverImageView; // +0x28
    SightIconView * _playIconView; // +0x30
    UIView * _audioBGView; // +0x38
    UIView * _audioPlayViewBGView; // +0x40
    UIImageView * _audioPlayView; // +0x48
    CContact * _contact; // +0x50
    NSString * _titleStr; // +0x58
    NSString * _coverImgURL; // +0x60
}
- (id)initWithReaderItemCellViewModel:(id)arg1 contact:(id)arg2;
- (void)configWithReaderItemViewMode:(id)arg1;
- (id)initWithRecAppMsgViewModel:(id)arg1 contact:(id)arg2;
- (void)configWithRecAppMsgItemViewMode:(id)arg1;
- (id)snapshotImage;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)rootViewConfigure;
- (double)rootViewPaddingTop;
- (void)configureReaderLayout;
- (void)configureVideoLayout;
- (void)configureTextLayout;
- (void)configurePicLayout;
- (void)configureAudioLayout;
- (id)richTextView;
- (id)headImageView;
- (id)nickNameLabel;
- (id)coverImageView;
- (id)playIconView;
- (id)audioBGView;
- (id)audioPlayViewBGView;
- (id)audioPlayView;
- (void)setRichTextView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNickNameLabel:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setAudioBGView:(id)arg1;
- (void)setAudioPlayViewBGView:(id)arg1;
- (void)setAudioPlayView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (BOOL)isShowLargeCover;
- (void)setIsShowLargeCover:(BOOL)arg1;
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)coverImgURL;
- (void)setCoverImgURL:(id)arg1;
- (void).cxx_destruct;
@end

