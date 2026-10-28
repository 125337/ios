@interface WCActionSheetRecentItem : MMObject
{
    unsigned int _type; // +0x8
    unsigned int _lastUsedTime; // +0xc
    MaterialRecommWxaCard * _card; // +0x10
    WCDevice * _device; // +0x18
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)card;
- (void)setCard:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (unsigned int)lastUsedTime;
- (void)setLastUsedTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
