{ Parsed from Appkit.framework NSSplitView.h }

{$ifdef TYPES}
{$ifndef NSSPLITVIEW_PAS_T}
{$define NSSPLITVIEW_PAS_T}

{ Constants }

const
  NSSplitViewDividerStyleThick = 1;
  NSSplitViewDividerStyleThin = 2;
  NSSplitViewDividerStylePaneSplitter = 3;

{ Types }
type
  NSSplitViewDividerStyle = NSInteger;
  NSSplitViewDividerStylePtr = ^NSSplitViewDividerStyle;

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef NSSPLITVIEW_PAS_R}
{$define NSSPLITVIEW_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef NSSPLITVIEW_PAS_F}
{$define NSSPLITVIEW_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef NSSPLITVIEW_PAS_S}
{$define NSSPLITVIEW_PAS_S}

{ External string constants }
var
  NSSplitViewWillResizeSubviewsNotification: NSString; cvar; external;
  NSSplitViewDidResizeSubviewsNotification: NSString; cvar; external;

{$endif}
{$endif}

{$ifdef FORWARD}
  NSSplitViewDelegateProtocol = objcprotocol;
  NSSplitView = objcclass;
  NSSplitViewPointer = ^NSSplitView;
  NSSplitViewPtr = NSSplitViewPointer;

{$endif}

{$ifdef CLASSES}
{$ifndef NSSPLITVIEW_PAS_C}
{$define NSSPLITVIEW_PAS_C}

{ NSSplitView }
  NSSplitView = objcclass external (NSView)
  private
    _variables: id;
    
  public
    procedure setVertical(flag: BOOL); message 'setVertical:';
    function isVertical: BOOL; message 'isVertical';
    procedure setDividerStyle(dividerStyle_: NSSplitViewDividerStyle); message 'setDividerStyle:';
    function dividerStyle: NSSplitViewDividerStyle; message 'dividerStyle';
    procedure setAutosaveName(autosaveName_: NSString); message 'setAutosaveName:';
    function autosaveName: NSString; message 'autosaveName';
    procedure setDelegate(delegate_: NSSplitViewDelegateProtocol); message 'setDelegate:';
    function delegate: NSSplitViewDelegateProtocol; message 'delegate';
    procedure drawDividerInRect(rect: NSRect); message 'drawDividerInRect:';
    function dividerColor: NSColor; message 'dividerColor';
    function dividerThickness: CGFloat; message 'dividerThickness';
    procedure adjustSubviews; message 'adjustSubviews';
    function isSubviewCollapsed(subview: NSView): BOOL; message 'isSubviewCollapsed:';
    function minPossiblePositionOfDividerAtIndex(dividerIndex: NSInteger): CGFloat; message 'minPossiblePositionOfDividerAtIndex:';
    function maxPossiblePositionOfDividerAtIndex(dividerIndex: NSInteger): CGFloat; message 'maxPossiblePositionOfDividerAtIndex:';
    procedure setPosition_ofDividerAtIndex(position: CGFloat; dividerIndex: NSInteger); message 'setPosition:ofDividerAtIndex:';
  end;

{ NSDeprecated_NSSplitViewCategory }
  NSDeprecated_NSSplitViewCategory = objccategory external name 'NSDeprecated' (NSSplitView)
    procedure setIsPaneSplitter(flag: BOOL); message 'setIsPaneSplitter:'; deprecated 'in Mac OS X 10.6 and later';
    function isPaneSplitter: BOOL; message 'isPaneSplitter'; deprecated 'in Mac OS X 10.6 and later';
  end;

{$endif}
{$endif}
{$ifdef PROTOCOLS}
{$ifndef NSSPLITVIEW_PAS_P}
{$define NSSPLITVIEW_PAS_P}
  
{ NSSplitViewDelegate Protocol }
  NSSplitViewDelegateProtocol = objcprotocol external name 'NSSplitViewDelegate'
  optional
    function splitView_canCollapseSubview(splitView: NSSplitView; subview: NSView): BOOL; message 'splitView:canCollapseSubview:';
    function splitView_shouldCollapseSubview_forDoubleClickOnDividerAtIndex(splitView: NSSplitView; subview: NSView; dividerIndex: NSInteger): BOOL; message 'splitView:shouldCollapseSubview:forDoubleClickOnDividerAtIndex:';
    function splitView_constrainMinCoordinate_ofSubviewAt(splitView: NSSplitView; proposedMinimumPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainMinCoordinate:ofSubviewAt:';
    function splitView_constrainMaxCoordinate_ofSubviewAt(splitView: NSSplitView; proposedMaximumPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainMaxCoordinate:ofSubviewAt:';
    function splitView_constrainSplitPosition_ofSubviewAt(splitView: NSSplitView; proposedPosition: CGFloat; dividerIndex: NSInteger): CGFloat; message 'splitView:constrainSplitPosition:ofSubviewAt:';
    procedure splitView_resizeSubviewsWithOldSize(splitView: NSSplitView; oldSize: NSSize); message 'splitView:resizeSubviewsWithOldSize:';
    function splitView_shouldAdjustSizeOfSubview(splitView: NSSplitView; view: NSView): BOOL; message 'splitView:shouldAdjustSizeOfSubview:';
    function splitView_shouldHideDividerAtIndex(splitView: NSSplitView; dividerIndex: NSInteger): BOOL; message 'splitView:shouldHideDividerAtIndex:';
    function splitView_effectiveRect_forDrawnRect_ofDividerAtIndex(splitView: NSSplitView; proposedEffectiveRect: NSRect; drawnRect: NSRect; dividerIndex: NSInteger): NSRect; message 'splitView:effectiveRect:forDrawnRect:ofDividerAtIndex:';
    function splitView_additionalEffectiveRectOfDividerAtIndex(splitView: NSSplitView; dividerIndex: NSInteger): NSRect; message 'splitView:additionalEffectiveRectOfDividerAtIndex:';
    procedure splitViewWillResizeSubviews(notification: NSNotification); message 'splitViewWillResizeSubviews:';
    procedure splitViewDidResizeSubviews(notification: NSNotification); message 'splitViewDidResizeSubviews:';
  end;
{$endif}
{$endif}
