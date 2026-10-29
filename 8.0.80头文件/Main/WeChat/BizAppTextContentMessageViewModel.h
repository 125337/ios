@interface BizAppTextContentMessageViewModel : AppStandardTextContentMessageViewModel
{
    id /* block */ _sourceTitleChanged; // +0x70
    BizAppMessageBaseInfoModel * _baseModel; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (id)title;
- (id)tagString;
- (unsigned long long)contentLayoutType;
- (id)contentText;
- (unsigned long long)contentImgCnt;
- (id)accessibilityMessageType;
- (BOOL)hasSourceView;
- (id)sourceIcon;
- (id)sourceTitle;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)thumbSquareUrl;
- (id)thumbImage;
- (id)sourceUsername;
- (BOOL)needShowSource;
- (void)setSourceTitleChanged:(id /* block */)arg1;
- (id /* block */)sourceTitleChanged;
- (id)baseModel;
- (void)setBaseModel:(id)arg1;
- (void).cxx_destruct;
@end
