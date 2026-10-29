@interface FinderLiveNoticeInfo : WXPBGeneratedMessage
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;
- (id)archivedWCTValue;
- (id)copy;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isQuickNotice;
- (BOOL)mm_isMemberLive;
- (BOOL)mm_isVisitor;
- (BOOL)mm_isOwner;
- (BOOL)mm_isMember;
- (long long)mm_exposeActionType;
- (void)setMm_anchorFinderUsername:(id)arg1;
- (id)mm_anchorFinderUsername;
- (id)coupons;
- (id)coupon;
- (id)validCoupon;
- (void)prepareCoupons;
- (BOOL)isNoticeForConcert;
@end

