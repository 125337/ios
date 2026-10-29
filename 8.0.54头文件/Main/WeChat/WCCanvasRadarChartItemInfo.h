@interface WCCanvasRadarChartItemInfo : MMObject <NSCoding>
{
    NSString * _label; // +0x8
    NSString * _score; // +0x10
    double _value; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)value;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)score;
- (void)setScore:(id)arg1;
- (void)setValue:(double)arg1;
- (void).cxx_destruct;
@end

