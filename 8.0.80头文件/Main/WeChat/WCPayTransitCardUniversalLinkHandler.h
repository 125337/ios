@interface WCPayTransitCardUniversalLinkHandler : NSObject
+ (BOOL)isTransitCardUniversalLinkURL:(id)arg1;
+ (BOOL)handleUniversalLinkURL:(id)arg1;
+ (BOOL)isValidURLComponents:(id)arg1;
+ (id)validatedParametersFromQueryItems:(id)arg1;
+ (void)reportUniversalLinkURL:(id)arg1 version:(id)arg2 cityID:(id)arg3 cityName:(id)arg4;
+ (id)pagePathWithCityID:(id)arg1 cityName:(id)arg2;
@end
