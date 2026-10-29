@interface WebViewSanboxUtility : NSObject
+ (id)convertWebComptPb2WebComptInfo:(id)arg1;
+ (id)randomSanboxId;
+ (id)hexadecimalStringFromData:(id)arg1;
+ (id)sucureRamdomHexStringInBytesLength:(unsigned int)arg1;
+ (id)sha1:(id)arg1;
+ (id)dictQueryForURL:(id)arg1;
+ (id)dictFragmentForURL:(id)arg1;
+ (id)newUrlStringFrom:(id)arg1 replaceHost:(id)arg2;
+ (id)replaceFirstPlaceHolder:(id)arg1 value:(id)arg2 FromString:(id)arg3;
@end

