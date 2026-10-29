@interface WCFinderJumpInfoContainer : NSObject <WCTTableCoding, PBCoding>
{
    int _scene; // +0x8
    NSMutableArray * _feedJumpInfoArray; // +0x10
    NSString * _tid; // +0x18
    unsigned long long _cacheTime; // +0x20
    NSString * _dupIdentifier; // +0x28
    WCFinderJumpInfoIdMutableArray * _feedJumpInfoIdArray; // +0x30
    WCFinderJumpInfoArray * _adJumpInfoArray; // +0x38
    FinderAdPreMovieAdInfo * _premovieAdInfo; // +0x40
    NSDictionary * _jumpInfoBusinessPriorityDict; // +0x48
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_cacheTime;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_feedJumpInfoIdArray;
+ (void)PBArrayAdd_adJumpInfoArray;
+ (void)PBArrayAdd_premovieAdInfo;
+ (void)PBArrayAdd_dupIdentifier;
+ (void)initialize;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)cacheTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_cacheTime;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_scene;
+ (const void *)feedJumpInfoIdArray;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_feedJumpInfoIdArray;
+ (const void *)adJumpInfoArray;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_adJumpInfoArray;
+ (const void *)premovieAdInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_premovieAdInfo;
+ (const void *)dupIdentifier;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_dupIdentifier;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (void)__wcdb_table_constraint_8:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_index_11:(void *)arg1;
+ (id)feedPosArray;
+ (id)checkCnyButtonStatus:(id)arg1;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (BOOL)arrayIsEqual:(id)arg1 toArray:(id)arg2;
- (id)getPBPropertyTable;
- (id)description;
- (id)copy;
- (id)archivedWCTValue;
- (id)initWithTid:(id)arg1;
- (BOOL)isValid;
- (BOOL)hasJumpInfoShowOnComment;
- (void)setAdJumpInfoArray:(id)arg1;
- (void)setFeedJumpInfoArray:(id)arg1;
- (id)feedJumpInfoArray;
- (id)JumpInfoArrayFromAsync;
- (void)startMiniAppPreload;
- (void)removeJumpInfo:(id)arg1;
- (BOOL)removeAdJumpInfoWithBusinessType:(int)arg1;
- (BOOL)removeAdJumpInfoWithBusinessCategory:(int)arg1;
- (id)kvDictWithJumpInfo:(id)arg1;
- (id)clientUdfKV;
- (id)JumpInfoArrayForReport;
- (id)interactiveReportString;
- (id)jumpInfoKvDictOnShowPosition:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)appendOrReplaceAdJumpInfo:(id)arg1;
- (void)appendWithJumpInfoArray:(id)arg1;
- (void)prependWithJumpInfoArray:(id)arg1;
- (id)jumpInfoArrayOnShowPosition:(int)arg1;
- (id)_jumpInfoArrayOnShowPosition:(int)arg1;
- (id)getPostStateJumpInfo;
- (id)getRedPacketJumpInfo;
- (id)getLBSJumpInfo;
- (void)syncLBSFavState;
- (BOOL)haveRedPacketJumpInfo;
- (BOOL)haveMembershipZoneJumpInfo;
- (id)getRedPacketCoverID;
- (id)getAvatarJumpInfo;
- (id)getJumpInfoArrayOnTimeline;
- (id)getTopPriorityJumpInfosOnPosition:(int)arg1;
- (id)_getTopPriorityJumpInfosOnPosition:(int)arg1 checkPriorityGroup:(BOOL)arg2;
- (BOOL)_checkJumpInfoPriorityGroup:(unsigned long long)arg1 maxPriority:(unsigned long long)arg2 onPosition:(int)arg3;
- (id)sortJumpInfoArray:(id)arg1 onPosition:(int)arg2;
- (id)jumpInfoBusinessPriorityDict;
- (id)getJumpInfoArrayByBusinessType:(int)arg1;
- (id)getJumpInfoArrayByBusinessCategory:(int)arg1;
- (BOOL)hasMusicJumpInfo;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)dupIdentifier;
- (void)setDupIdentifier:(id)arg1;
- (id)feedJumpInfoIdArray;
- (void)setFeedJumpInfoIdArray:(id)arg1;
- (id)adJumpInfoArray;
- (id)premovieAdInfo;
- (void)setPremovieAdInfo:(id)arg1;
- (void)setJumpInfoBusinessPriorityDict:(id)arg1;
- (void).cxx_destruct;
@end
