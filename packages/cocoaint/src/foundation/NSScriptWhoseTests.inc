{ Parsed from Foundation.framework NSScriptWhoseTests.h }

{$ifdef TYPES}
{$ifndef NSSCRIPTWHOSETESTS_PAS_T}
{$define NSSCRIPTWHOSETESTS_PAS_T}

{ Constants }

const
  NSEqualToComparison = 0;
  NSLessThanOrEqualToComparison = 1;
  NSLessThanComparison = 2;
  NSGreaterThanOrEqualToComparison = 3;
  NSGreaterThanComparison = 4;
  NSBeginsWithComparison = 5;
  NSEndsWithComparison = 6;
  NSContainsComparison = 7;

{ Types }
type
  NSTestComparisonOperation = NSUInteger;
  NSTestComparisonOperationPtr = ^NSTestComparisonOperation;

{$endif}
{$endif}

{$ifdef RECORDS}
{$ifndef NSSCRIPTWHOSETESTS_PAS_R}
{$define NSSCRIPTWHOSETESTS_PAS_R}

{$endif}
{$endif}

{$ifdef FUNCTIONS}
{$ifndef NSSCRIPTWHOSETESTS_PAS_F}
{$define NSSCRIPTWHOSETESTS_PAS_F}

{$endif}
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
{$ifndef NSSCRIPTWHOSETESTS_PAS_S}
{$define NSSCRIPTWHOSETESTS_PAS_S}

{$endif}
{$endif}

{$ifdef FORWARD}
  NSScriptWhoseTest = objcclass;
  NSScriptWhoseTestPointer = ^NSScriptWhoseTest;
  NSScriptWhoseTestPtr = NSScriptWhoseTestPointer;
  NSLogicalTest = objcclass;
  NSLogicalTestPointer = ^NSLogicalTest;
  NSLogicalTestPtr = NSLogicalTestPointer;
  NSSpecifierTest = objcclass;
  NSSpecifierTestPointer = ^NSSpecifierTest;
  NSSpecifierTestPtr = NSSpecifierTestPointer;

{$endif}

{$ifdef CLASSES}
{$ifndef NSSCRIPTWHOSETESTS_PAS_C}
{$define NSSCRIPTWHOSETESTS_PAS_C}

{ NSScriptWhoseTest }
  NSScriptWhoseTest = objcclass external (NSObject, NSCodingProtocol)
    
  public
    function isTrue: BOOL; message 'isTrue';

    { Adopted Protocols }
    procedure encodeWithCoder(aCoder: NSCoder);
    function initWithCoder(aDecoder: NSCoder): id;
  end;

{ NSLogicalTest }
  NSLogicalTest = objcclass external (NSScriptWhoseTest)
  private
    _operator: cint;
    _subTests: id;
    
  public
    function initAndTestWithTests(subTests: NSArray): id; message 'initAndTestWithTests:';
    function initOrTestWithTests(subTests: NSArray): id; message 'initOrTestWithTests:';
    function initNotTestWithTest(subTest: NSScriptWhoseTest): id; message 'initNotTestWithTest:';
  end;

{ NSSpecifierTest }
  NSSpecifierTest = objcclass external (NSScriptWhoseTest)
  private
    _comparisonOperator: NSTestComparisonOperation;
    _object1: NSScriptObjectSpecifier;
    _object2: id;
    
  public
    function initWithObjectSpecifier_comparisonOperator_testObject(obj: NSScriptObjectSpecifier; compOp: NSTestComparisonOperation; obj1: id): id; message 'initWithObjectSpecifier:comparisonOperator:testObject:';
  end;

{ NSComparisonMethodsCategory }
  NSComparisonMethodsCategory = objccategory external (NSObject)
    function isEqualTo(object_: id): BOOL; message 'isEqualTo:';
    function isLessThanOrEqualTo(object_: id): BOOL; message 'isLessThanOrEqualTo:';
    function isLessThan(object_: id): BOOL; message 'isLessThan:';
    function isGreaterThanOrEqualTo(object_: id): BOOL; message 'isGreaterThanOrEqualTo:';
    function isGreaterThan(object_: id): BOOL; message 'isGreaterThan:';
    function isNotEqualTo(object_: id): BOOL; message 'isNotEqualTo:';
    function doesContain(object_: id): BOOL; message 'doesContain:';
    function isLike(object_: NSString): BOOL; message 'isLike:';
    function isCaseInsensitiveLike(object_: NSString): BOOL; message 'isCaseInsensitiveLike:';
  end;

{ NSScriptingComparisonMethodsCategory }
  NSScriptingComparisonMethodsCategory = objccategory external (NSObject)
    function scriptingIsEqualTo(object_: id): BOOL; message 'scriptingIsEqualTo:';
    function scriptingIsLessThanOrEqualTo(object_: id): BOOL; message 'scriptingIsLessThanOrEqualTo:';
    function scriptingIsLessThan(object_: id): BOOL; message 'scriptingIsLessThan:';
    function scriptingIsGreaterThanOrEqualTo(object_: id): BOOL; message 'scriptingIsGreaterThanOrEqualTo:';
    function scriptingIsGreaterThan(object_: id): BOOL; message 'scriptingIsGreaterThan:';
    function scriptingBeginsWith(object_: id): BOOL; message 'scriptingBeginsWith:';
    function scriptingEndsWith(object_: id): BOOL; message 'scriptingEndsWith:';
    function scriptingContains(object_: id): BOOL; message 'scriptingContains:';
  end;

{$endif}
{$endif}
