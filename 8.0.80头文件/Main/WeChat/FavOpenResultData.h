@interface FavOpenResultData : NSObject
{
    BOOL _openFlutterNote; // +0x8
    BOOL _canEditNote; // +0x9
    BOOL _needWaitForResourceLoading; // +0xa
    unsigned int _favId; // +0xc
    unsigned int _localId; // +0x10
    int _favType; // +0x14
    int _sourceType; // +0x18
    unsigned int _reportTime; // +0x1c
    int _scene; // +0x20
    int _enterResult; // +0x24
    int _failReason; // +0x28
    int _noteOpenFormat; // +0x2c
    long long _loadingTimeMs; // +0x30
    long long _clickEnterTimeMs; // +0x38
    long long _viewDidAppearTimeMs; // +0x40
    long long _noteInitCostMs; // +0x48
    long long _noteLoadDataCostMs; // +0x50
    long long _noteLayoutCostMs; // +0x58
    NSString * _extraMsg; // +0x60
}
+ (id)createWithItem:(id)arg1 scene:(unsigned int)arg2 clickEnterTime:(long long)arg3;
+ (id)createWithWNOpenScene:(unsigned long long)arg1;
+ (unsigned int)convertWNOpenSceneToFavEntranceScene:(unsigned long long)arg1;
- (void)reportWithEnterResult:(long long)arg1 failReason:(long long)arg2 loadingTimeMs:(long long)arg3;
- (unsigned int)favId;
- (void)setFavId:(unsigned int)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (int)favType;
- (void)setFavType:(int)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (unsigned int)reportTime;
- (void)setReportTime:(unsigned int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)enterResult;
- (void)setEnterResult:(int)arg1;
- (int)failReason;
- (void)setFailReason:(int)arg1;
- (long long)loadingTimeMs;
- (void)setLoadingTimeMs:(long long)arg1;
- (long long)clickEnterTimeMs;
- (void)setClickEnterTimeMs:(long long)arg1;
- (BOOL)openFlutterNote;
- (void)setOpenFlutterNote:(BOOL)arg1;
- (BOOL)canEditNote;
- (void)setCanEditNote:(BOOL)arg1;
- (long long)viewDidAppearTimeMs;
- (void)setViewDidAppearTimeMs:(long long)arg1;
- (BOOL)needWaitForResourceLoading;
- (void)setNeedWaitForResourceLoading:(BOOL)arg1;
- (long long)noteInitCostMs;
- (void)setNoteInitCostMs:(long long)arg1;
- (long long)noteLoadDataCostMs;
- (void)setNoteLoadDataCostMs:(long long)arg1;
- (long long)noteLayoutCostMs;
- (void)setNoteLayoutCostMs:(long long)arg1;
- (id)extraMsg;
- (void)setExtraMsg:(id)arg1;
- (int)noteOpenFormat;
- (void)setNoteOpenFormat:(int)arg1;
- (void).cxx_destruct;
@end
