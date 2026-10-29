@interface WAAppOpenCustomUIWidgetParameter : MMObject
{
    BOOL _hasAlreadyAddToSuperview; // +0x8
    unsigned long long _pageTarget; // +0x10
    unsigned long long _componentTarget; // +0x18
    UIView * _widgetView; // +0x20
    id /* block */ _layoutBlock; // +0x28
    unsigned long long _source; // +0x30
}
- (id)widgetIdentifier;
- (unsigned long long)pageTarget;
- (void)setPageTarget:(unsigned long long)arg1;
- (unsigned long long)componentTarget;
- (void)setComponentTarget:(unsigned long long)arg1;
- (id)widgetView;
- (void)setWidgetView:(id)arg1;
- (id /* block */)layoutBlock;
- (void)setLayoutBlock:(id /* block */)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (BOOL)hasAlreadyAddToSuperview;
- (void)setHasAlreadyAddToSuperview:(BOOL)arg1;
- (void).cxx_destruct;
@end

