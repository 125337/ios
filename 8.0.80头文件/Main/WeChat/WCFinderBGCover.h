@interface WCFinderBGCover : NSObject
{
    NSString * _url; // +0x8
    NSString * _urlColorValue; // +0x10
    NSString * _parsedColorValue; // +0x18
}
+ (id)BGCoverWithURL:(id)arg1 oldCover:(id)arg2;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)urlColor;
- (id)parsedColor;
- (id)archivedWCTValue;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)urlColorValue;
- (void)setUrlColorValue:(id)arg1;
- (id)parsedColorValue;
- (void)setParsedColorValue:(id)arg1;
- (void).cxx_destruct;
@end
