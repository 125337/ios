@interface WCMediaEcsInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _showDetailBtn; // +0x8
    int _bizType; // +0xc
    NSString * _productId; // +0x10
    NSString * _ecsJumpInfoBase64; // +0x18
    NSString * _reportData; // +0x20
}
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_bizType;
+ (void)PBArrayAdd_ecsJumpInfoBase64;
+ (void)PBArrayAdd_reportData;
+ (void)PBArrayAdd_showDetailBtn;
+ (void)initialize;
+ (id)fromXMLParentNode:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toXML;
- (BOOL)isValid;
- (BOOL)canShowEntrance;
- (id)wording;
- (BOOL)isProduct;
- (id)productId;
- (void)setProductId:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (id)ecsJumpInfoBase64;
- (void)setEcsJumpInfoBase64:(id)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (BOOL)showDetailBtn;
- (void)setShowDetailBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end
