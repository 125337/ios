@interface LocationMessageViewModel : CommonMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)locationChatNamePath:(id)arg1 ThumeImageStyle:(unsigned long long)arg2;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (CLLocationCoordinate2D)coordinate;
- (id)getLocationThumbImage:(unsigned long long)arg1;
- (BOOL)hasReferImage;
- (id)getReferImage;
@end

