@interface WCFinderHalfProfileInteractionInfoDetailConfiguration : NSObject <UIContentConfiguration>
{
    NSString * _identifier; // +0x8
    NSString * _describeContent; // +0x10
    id /* block */ _tapAction; // +0x18
    double _containerWidth; // +0x20
    NSNumber * _height; // +0x28
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
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (void).cxx_destruct;
@end

