@interface WCEditImageWidgetOperation : WCEditImageOperation
{
    unsigned long long _widgetOperationType; // +0x8
    EditImageWidgetTool * _widget; // +0x10
}
- (unsigned long long)widgetOperationType;
- (void)setWidgetOperationType:(unsigned long long)arg1;
- (id)widget;
- (void)setWidget:(id)arg1;
- (void).cxx_destruct;
@end
