@interface EmoticonMessageViewModel : CommonMessageViewModel <IEmoticonDownloadExt>
{
    BOOL _isSelfieEmoticon; // +0x70
    unsigned long long _msgDownloadStatus; // +0x78
    CGSize _noImageSize; // +0x80
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)sourceIcon;
- (id)sourceTitle;
- (BOOL)isTailPart;
- (BOOL)isShowSourceView;
- (BOOL)shouldShowSourceViewInContent;
- (void)OnEmoticonDownload:(unsigned int)arg1 withMsgWrap:(id)arg2;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (CGSize)noImageSize;
- (void)setNoImageSize:(CGSize)arg1;
- (unsigned long long)msgDownloadStatus;
- (void)setMsgDownloadStatus:(unsigned long long)arg1;
- (BOOL)isSelfieEmoticon;
- (void)setIsSelfieEmoticon:(BOOL)arg1;
@end
