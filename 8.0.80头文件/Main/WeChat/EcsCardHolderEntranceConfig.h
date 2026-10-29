@interface EcsCardHolderEntranceConfig : NSObject
{
    BOOL _needPreload; // +0x8
    BOOL _isToNewCards; // +0x9
    BOOL _shouldShow; // +0xa
    unsigned int _showType; // +0xc
    unsigned int _titleType; // +0x10
    NSString * _iconUrl; // +0x18
}
- (id)initWithShowType:(unsigned int)arg1 iconUrl:(id)arg2 needPreload:(BOOL)arg3 titleType:(unsigned int)arg4;
- (unsigned int)showType;
- (id)iconUrl;
- (BOOL)needPreload;
- (unsigned int)titleType;
- (BOOL)isToNewCards;
- (BOOL)shouldShow;
- (void).cxx_destruct;
@end
