@interface WCMegaVideoFinderBusiness : NSObject <WCTColumnCoding, PBCoding>
{
    NSString * _tid; // +0x8
    NSString * _nonceId; // +0x10
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_nonceId;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMegaVideoFinderBusiness:(id)arg1;
- (id)genMegaVideoFinderBusiness;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (void).cxx_destruct;
@end

