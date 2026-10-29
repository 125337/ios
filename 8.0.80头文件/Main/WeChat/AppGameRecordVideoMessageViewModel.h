@interface AppGameRecordVideoMessageViewModel : CommonMessageViewModel <IVideoExt>
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (BOOL)isShowSourceView;
- (id)sourceIcon;
- (id)sourceTag;
- (id)sourceIconUrlString;
- (id)thumbUrl;
- (id)thumbData;
- (BOOL)isChatroom;
- (void)UpdateVideoMsg:(id)arg1;
- (CGSize)getTitleSize;
- (CGSize)getDescSize;
- (CGSize)getPageSize;
@end
