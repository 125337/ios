@interface EcsTracker : NSObject
{
    BOOL _isBatch; // +0x8
    long long _type; // +0x10
    EcsTrackerStep * _step; // +0x18
    NSArray * _batchItems; // +0x20
}
+ (id /* block */)start;
+ (id /* block */)step;
+ (id /* block */)end;
+ (id /* block */)fail;
+ (id /* block */)success;
+ (id /* block */)_createETM:(long long)arg1;
+ (id)batch:(id)arg1;
- (id)init;
- (id)jsonToString:(id)arg1;
- (id /* block */)sceneId;
- (id /* block */)bizId;
- (id /* block */)log;
- (id /* block */)name;
- (id /* block */)extraJson;
- (id /* block */)sceneExtraJson;
- (id /* block */)print;
- (id /* block */)reportDest;
- (id /* block */)from;
- (id /* block */)time;
- (id /* block */)timeUs;
- (id /* block */)groupStart;
- (id /* block */)groupStartList;
- (id /* block */)groupEnd;
- (id /* block */)groupEndList;
- (id /* block */)done;
- (id /* block */)reportToAmoeba;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)step;
- (BOOL)isBatch;
- (void)setIsBatch:(BOOL)arg1;
- (id)batchItems;
- (void)setBatchItems:(id)arg1;
- (void).cxx_destruct;
@end
