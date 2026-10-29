@interface MBWxPicRequestDecorator : NSObject <IMBImageRequestDecorator>
+ (BOOL)isURLRequestingWxPic:(id)arg1;
- (id)additionalHTTPHeadersForURL:(id)arg1;
@end
