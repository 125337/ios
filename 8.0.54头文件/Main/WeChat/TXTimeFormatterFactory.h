@interface TXTimeFormatterFactory : NSObject
{
    NSDateFormatter * _dateFormatter; // +0x8
}
+ (id)shareInstance;
- (id)init;
- (id)getDateFormatter;
- (void).cxx_destruct;
@end

