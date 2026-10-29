@interface TingSharePlayButton : MMUIButton
{
    BOOL _enterPlayer; // +0x8
    int _scene; // +0xc
    TingItem * _tingItem; // +0x10
    MMListenCategoryItem * _categoryItem; // +0x18
    ActiveSessionContext * _sessionContext; // +0x20
}
- (id)sessionContext;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2;
- (void)setButtonStyle:(unsigned long long)arg1;
- (void)togglePlay;
- (void)setTingItem:(id)arg1;
- (BOOL)isPlaying;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)tingItem;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (void)setSessionContext:(id)arg1;
- (BOOL)enterPlayer;
- (void)setEnterPlayer:(BOOL)arg1;
- (void).cxx_destruct;
@end

