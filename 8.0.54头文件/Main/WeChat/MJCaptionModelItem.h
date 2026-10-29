@interface MJCaptionModelItem : NSObject <PBCoding>
{
    NSString * _text; // +0x8
    double _startTime; // +0x10
    double _duration; // +0x18
}
+ (void)PBArrayAdd_text;
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_duration;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithText:(id)arg1 timeRange:(struct)arg2;
- (id)initWithCaptionItem:(id)arg1;
- (id)toCaptionItem;
- (BOOL)isValid;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)text;
- (void)setText:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void).cxx_destruct;
@end

