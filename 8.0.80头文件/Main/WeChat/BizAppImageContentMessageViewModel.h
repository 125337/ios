@interface BizAppImageContentMessageViewModel : AppStandardImageContentMessageViewModel
{
    id /* block */ _sourceTitleChanged; // +0x70
    BizAppMessageBaseInfoModel * _baseModel; // +0x78
    unsigned long long _realImageRatio; // +0x80
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (id)image;
- (id)imageUrl;
- (unsigned long long)imageRatio;
- (id)metadata;
- (id)title;
- (id)accessibilityMessageType;
- (BOOL)hasSourceView;
- (id)sourceTitle;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)sourceIcon;
- (id)sourceUsername;
- (id)sourceNickname;
- (BOOL)isVideo;
- (id)coverImgUrl;
- (id)heroFirstImageCdnUrl;
- (long long)picCount;
- (BOOL)isLongPic;
- (BOOL)firstImageIsLongPic;
- (BOOL)showFinderContactIcon;
- (unsigned long long)calculateImageRatio;
- (void)onCoverImageReady:(id)arg1;
- (BOOL)needShowSource;
- (void)setSourceTitleChanged:(id /* block */)arg1;
- (id /* block */)sourceTitleChanged;
- (id)baseModel;
- (void)setBaseModel:(id)arg1;
- (unsigned long long)realImageRatio;
- (void)setRealImageRatio:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
