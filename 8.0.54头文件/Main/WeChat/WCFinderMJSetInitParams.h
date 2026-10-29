@interface WCFinderMJSetInitParams : NSObject
{
    WCFinderMJSetNecessaryParams * _necessaryParams; // +0x8
    WCFinderMJSetOptionalParams * _optionalParams; // +0x10
}
+ (id)paramsWithTemplateTopicId:(id)arg1;
+ (id)paramsWithTemplateShortUrl:(id)arg1;
- (id)initWithTemplateTopicId:(id)arg1;
- (id)initWithTemplateShortUrl:(id)arg1;
- (id)necessaryParams;
- (void)setNecessaryParams:(id)arg1;
- (id)optionalParams;
- (void)setOptionalParams:(id)arg1;
- (void).cxx_destruct;
@end

