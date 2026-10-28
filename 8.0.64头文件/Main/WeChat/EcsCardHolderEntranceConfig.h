@interface EcsCardHolderEntranceConfig : NSObject
{
    BOOL _needPreload; // +0x8
    BOOL _isToNewCards; // +0x9
    BOOL _shouldShow; // +0xa
    unsigned int _showType; // +0xc
    NSString * _iconUrl; // +0x10
}
- (id)initWithShowType:(unsigned int)arg1 iconUrl:(id)arg2 needPreload:(BOOL)arg3;
- (unsigned int)showType;
- (id)iconUrl;
- (BOOL)needPreload;
- (BOOL)isToNewCards;
- (BOOL)shouldShow;
- (void).cxx_destruct;
@end
