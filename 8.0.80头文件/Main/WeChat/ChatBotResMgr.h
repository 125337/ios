@interface ChatBotResMgr : NSObject
{
    BOOL _isLocal; // +0x8
    BOOL _loadResSuccess; // +0x9
    NSString * _kLocalTag; // +0x10
    ChatBotResData * _data; // +0x18
}
+ (id)sharedInstance;
- (id)initPrivate;
- (BOOL)isLocal;
- (BOOL)isResReady;
- (id)getResPath;
- (BOOL)loadConfig:(id)arg1;
- (BOOL)loadConfig;
- (double)getStandardLength;
- (BOOL)isDebugKey:(id)arg1;
- (id)getString:(id)arg1;
- (id)getImage:(id)arg1;
- (id)getImagePath:(id)arg1;
- (id)getSvg:(id)arg1 size:(CGSize)arg2 color:(id)arg3;
- (BOOL)loadStringConfig:(id)arg1;
- (BOOL)loadSvgConfig:(id)arg1;
- (BOOL)loadImageConfig:(id)arg1;
- (BOOL)loadOptionsConfig:(id)arg1;
- (id)parseConfigJson:(id)arg1;
- (BOOL)isLoadResSucc;
- (void)setIsLocal:(BOOL)arg1;
- (id)kLocalTag;
- (void)setKLocalTag:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (BOOL)loadResSuccess;
- (void)setLoadResSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
