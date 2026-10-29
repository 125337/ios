@interface QWorldMapConfig : NSObject
{
    NSArray * _originData; // +0x8
    NSMutableArray * _sources; // +0x10
}
+ (id)localSourceVersionForScene:(int)arg1 isBingSource:(BOOL)arg2;
- (id)initWithArray:(id)arg1;
- (void)save:(BOOL)arg1;
- (id)sources;
- (void)setSources:(id)arg1;
- (void).cxx_destruct;
@end

