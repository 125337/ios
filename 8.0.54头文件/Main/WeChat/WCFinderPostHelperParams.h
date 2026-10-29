@interface WCFinderPostHelperParams : NSObject
{
    unsigned int _profileEnterType; // +0x8
    unsigned long long _enterScene; // +0x10
    unsigned long long _createFrom; // +0x18
    unsigned long long _createScene; // +0x20
    unsigned long long _publisherEnterType; // +0x28
}
+ (id)paramsWithEnterScene:(unsigned long long)arg1 createFrom:(unsigned long long)arg2 createScene:(unsigned long long)arg3;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)createFrom;
- (void)setCreateFrom:(unsigned long long)arg1;
- (unsigned long long)createScene;
- (void)setCreateScene:(unsigned long long)arg1;
- (unsigned int)profileEnterType;
- (void)setProfileEnterType:(unsigned int)arg1;
- (unsigned long long)publisherEnterType;
- (void)setPublisherEnterType:(unsigned long long)arg1;
@end

