@interface WCFinderOpenIMInfo : NSObject
{
    BOOL _showInHalfScreen; // +0x8
    BOOL _isFromJumpInfo; // +0x9
    unsigned int _scene; // +0xc
    unsigned int _openContactScene; // +0x10
    NSString * _finderUsername; // +0x18
    NSString * _exportUsername; // +0x20
    NSString * _joinLiveTraceBuffer; // +0x28
    NSString * _searchContext; // +0x30
    NSString * _finderContext; // +0x38
}
- (id)genOpenIMFinderInfo;
- (id)genSearchContext;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)openContactScene;
- (void)setOpenContactScene:(unsigned int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)exportUsername;
- (void)setExportUsername:(id)arg1;
- (id)joinLiveTraceBuffer;
- (void)setJoinLiveTraceBuffer:(id)arg1;
- (BOOL)showInHalfScreen;
- (void)setShowInHalfScreen:(BOOL)arg1;
- (BOOL)isFromJumpInfo;
- (void)setIsFromJumpInfo:(BOOL)arg1;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (id)finderContext;
- (void)setFinderContext:(id)arg1;
- (void).cxx_destruct;
@end
