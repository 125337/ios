@interface WCFinderHalfProfileInteractionInfoDetailConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewReportableItem>
{
    NSString * _identifier; // +0x8
    NSString * _describeContent; // +0x10
    id /* block */ _tapAction; // +0x18
    NSString * _viewID; // +0x20
    unsigned long long _reportPolicy; // +0x28
    NSDictionary * _params; // +0x30
    double _containerWidth; // +0x38
    NSNumber * _height; // +0x40
}
- (double)itemHeightWithLayoutEnvironment:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)describeContent;
- (void)setDescribeContent:(id)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id)viewID;
- (void)setViewID:(id)arg1;
- (unsigned long long)reportPolicy;
- (void)setReportPolicy:(unsigned long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (void).cxx_destruct;
@end
