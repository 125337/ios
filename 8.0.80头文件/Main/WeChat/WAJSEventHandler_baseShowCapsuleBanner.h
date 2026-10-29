@interface WAJSEventHandler_baseShowCapsuleBanner : WAJSEventHandler_BaseEvent
{
    NSDictionary * _extraData; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)configForCurrentKey;
- (id)text;
- (id)iconUrl;
- (id)darkIconUrl;
- (id)iconImage;
- (unsigned long long)bannerType;
- (id)configCategory;
- (id)fallbackTexts;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end
