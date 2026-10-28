@interface WCFinderRedDotFeatureMMKV : NSObject
{
    NSMutableArray * _openWXActionArray; // +0x8
    NSMutableArray * _backgroundTsArray; // +0x10
    NSMutableArray * _foregroundTsArray; // +0x18
    NSMutableDictionary * _businessClickWithoutRedDotDic; // +0x20
    NSMutableDictionary * _businessClickWithRedDotDic; // +0x28
    NSMutableDictionary * _businessRedDotExposeTsDic; // +0x30
    NSMutableArray * _findPageClickArray; // +0x38
    NSMutableArray * _findPageExposeArray; // +0x40
    NSMutableArray * _patch_openWXActionArray; // +0x48
    NSMutableArray * _patch_backgroundTsArray; // +0x50
    NSMutableArray * _patch_foregroundTsArray; // +0x58
}
+ (long long)calcArrayContainer:(id)arg1 intervalType:(int)arg2;
- (id)defaultMMKVMapID;
- (id)getFeatureMMKV;
- (id)findPageExposeArray;
- (id)findPageClickArray;
- (id)businessRedDotExposeTsDic;
- (id)businessClickWithoutRedDotDic;
- (id)businessClickWithRedDotDic;
- (id)openWXActionArray;
- (id)backgroundTsArray;
- (id)foregroundTsArray;
- (void)markOpenWXAction;
- (long long)getOpenWXActionBy:(int)arg1;
- (void)markBackgroundAction;
- (long long)getBackgroundActionBy:(int)arg1;
- (void)markForegroundAction;
- (long long)getForegroundActionBy:(int)arg1;
- (void)markExitBusinessType:(int)arg1;
- (double)getExitIntervalBusinessType:(int)arg1;
- (void)markClickFindPageRedDotEnvironmentBusinessType:(int)arg1 hasRedDot:(BOOL)arg2;
- (void)markClickBusinessTypeWithoutRedDotType:(int)arg1;
- (long long)getClickWithoutRedDotBusinessTypeFromType:(int)arg1 intervalType:(int)arg2;
- (void)markClickBusinessTypeWithRedDotType:(int)arg1;
- (long long)getClickWithRedDotBusinessTypeFromType:(int)arg1 intervalType:(int)arg2;
- (void)markClickBusinessRedDotConsumeType:(int)arg1;
- (long long)getLastBusinessRedDotConsumeFromType:(int)arg1;
- (void)markBusinessRedDotExposeType:(int)arg1;
- (long long)getLastBusinessRedDotExposeFromType:(int)arg1;
- (long long)getBusinessRedDotExposeCountFromType:(int)arg1 intervalType:(int)arg2;
- (long long)getEarliestBusinessRedDotExposeTimeStamp;
- (void)markFindPageClickAction;
- (long long)getFindPageClickCountByIntervalType:(int)arg1;
- (void)markFindPageExposeAction;
- (long long)getFindPageExposeCountByIntervalType:(int)arg1;
- (void)setOpenWXActionArray:(id)arg1;
- (void)setBackgroundTsArray:(id)arg1;
- (void)setForegroundTsArray:(id)arg1;
- (void)setBusinessClickWithoutRedDotDic:(id)arg1;
- (void)setBusinessClickWithRedDotDic:(id)arg1;
- (void)setBusinessRedDotExposeTsDic:(id)arg1;
- (void)setFindPageClickArray:(id)arg1;
- (void)setFindPageExposeArray:(id)arg1;
- (id)patch_openWXActionArray;
- (void)setPatch_openWXActionArray:(id)arg1;
- (id)patch_backgroundTsArray;
- (void)setPatch_backgroundTsArray:(id)arg1;
- (id)patch_foregroundTsArray;
- (void)setPatch_foregroundTsArray:(id)arg1;
- (void).cxx_destruct;
@end
