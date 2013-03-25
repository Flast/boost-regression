// html.cpp
//
// Copyright (c) 2010
// Steven Watanabe
//
// Distributed Under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include "html.hpp"

const char* const boost::regression::make_tinyurl =
    "<span>"
    "<script type=\"text/javascript\">\n"
    "<!--\n"
    "function make_tinyurl()\n"
    "{\n"
    "    window.open( 'http://tinyurl.com/create.php?url=' + parent.location.href );\n"
    "}\n"
    "//-->\n"
    "</script>\n"
    "\n"
    "<a href=\"javascript:make_tinyurl()\">TinyUrl</a>"
    "</span>\n"
;

const char* const boost::regression::issues_legend =
    "<div class=\"legend\">\n"
    "<table border=\"0\" summary=\"report description\">\n"
    "<tr>\n"
    "    <td>\n"
    "    <table border=\"0\" summary=\"legend\">\n"
    "        <tr>\n"
    "            <td>\n"
    "                <table width=\"100%\" summary=\"unexpected new fail legend\">\n"
    "                <tr class=\"library-row-single\"><td class=\"library-fail-unexpected-new\">&lt;toolset&gt;</td></tr>\n"
    "                </table>\n"
    "            </td>\n"
    "            <td class=\"legend-item\">Failure on a newly added test/compiler.</td>\n"
    "        </tr>\n"
    "        <tr>\n"
    "            <td>\n"
    "                <table width=\"100%\" summary=\"unexpected fail legend\">\n"
    "                <tr class=\"library-row-single\"><td class=\"library-fail-unexpected\">&lt;toolset&gt;</td></tr>\n"
    "                </table>\n"
    "            </td>\n"
    "            <td class=\"legend-item\">Unexpected failure.</td>\n"
    "        </tr>\n"
    "    </table>\n"
    "    </td>\n"
    "</tr>\n"
    "</table>\n"
    "</div>\n"
;

const char* const boost::regression::library_user_legend =
    "<div class=\"legend\">\n"
    "<table border=\"0\" summary=\"report description\">\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"success legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-success-expected user-library-success-expected\">pass</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">The test successfully passes.</td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"expected fail legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-fail-expected user-library-fail-expected\"><u>fail*</u></td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            A <b>known failure</b> that the library maintainers are aware about. Please follow the link to \n"
    "            find out how it affects the library's functionality.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unusable legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-unusable user-library-unusable\">unusable</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            The library author marked it as <b>unusable</b> on this particular platform/toolset. Please\n"
    "            see the corresponding footnote.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unresearched legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-fail-expected-unresearched user-library-fail-expected-unresearched\"><u>fail?</u></td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "          An <b>unsearched failure</b>: the library maintainers are aware of it, but need help with \n"
    "          investigating/addressing it for future releases. Please follow the link to \n"
    "          access the details and find out how it affects library functionality. </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected new fail legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-fail-unexpected-new user-library-fail-unexpected-new\"><u>fail</u></td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            A <b>new failure</b> on the test/compiler added in this release that hasn't been accounted for yet. \n"
    "            Please follow the link to access the details.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected fail legend\">\n"
    "            <tr class=\"library-row-single user-library-row-single\"><td class=\"library-fail-unexpected\"><u>fail</u></td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "             A <b>regression</b> comparing to the previous release. Please follow the link to \n"
    "             access the details.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\"></td>\n"
    "    </tr>\n"
    "</table>\n"
    "<hr/>\n"
    "<table border=\"0\" summary=\"report description\">\n"
    "    <tr>\n"
    "        <td><span class=\"run-type-incremental\">i</span></td>\n"
    "        <td class=\"legend-explanation\">An incremental run.</td>\n"
    "    </tr>\n"
    "</table>\n"
    "</div>\n"
;

const char* const boost::regression::library_developer_legend =
    "<div class=\"legend\">\n"
    "<table border=\"0\" summary=\"report description\">\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"success legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-success-expected\">pass</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">Success.</td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected pass legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-success-unexpected\">pass</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">Unexpected success; follow the link for more details.</td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"expected fail legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-fail-expected\">fail*</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">Expected failure; follow the link for more details.</td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unusable legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-unusable\">n/a</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">The library author marked it as unusable on this particular platform/toolset.</td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unresearched legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-fail-expected-unresearched\">fail?</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">Unsearched failure; follow the link for more details.</td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected new fail legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-fail-unexpected-new\">fail</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">Failure on a newly added test/compiler.</td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected fail legend\">\n"
    "            <tr class=\"library-row-single\"><td class=\"library-fail-unexpected\">fail</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">Unexpected failure/regression.</td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\"></td>\n"
    "    </tr>\n"
    "</table>\n"
    "<hr/>\n"
    "<table border=\"0\" summary=\"report description\">\n"
    "    <tr>\n"
    "        <td><span class=\"run-type-incremental\">i</span></td>\n"
    "        <td class=\"legend-explanation\">An incremental run.</td>\n"
    "    </tr>\n"
    "</table>\n"
    "</div>\n"
;

const char * const boost::regression::summary_user_legend =
    "<div class=\"legend\">\n"
    "<table border=\"0\" summary=\"report description\">\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"success legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-success-expected user-summary-success-expected\">&#160;pass&#160;</td></tr>\n"
    "                </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            All library's tests pass.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"expected fail legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-fail-expected user-summary-fail-expected\"><u>details</u></td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            Most of the library's tests pass, but there are some <b>known failures</b> which might affect the library's\n"
    "            functionality. Please follow the link to see the detailed report.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected new fail legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-fail-unexpected-new user-summary-fail-unexpected-new\"><u>details</u></td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            Some of the <b>newly added</b> library's tests fail, or some of the library's tests fail on\n"
    "            the <b>newly added compiler</b>, or some of the tests fail due to <b>unresearched \n"
    "            reasons</b>. Please follow the link to see the detailed report.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected fail legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-fail-unexpected user-summary-fail-unexpected\"><u>regress.</u></td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            There are some <b>regressions</b> in the library comparing to the previous release. \n"
    "            Please follow the link to see the detailed report.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unusable legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-unusable user-summary-unusable\">unusable</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            The library author marked it as <b>unusable</b> on the particular platform/toolset.\n"
    "            Please follow the link to see the detailed report.\n"
    "        </td>\n"
    "    </tr>\n"
    "</table>\n"
    "<hr/>\n"
    "<table border=\"0\" summary=\"report description\" id=\"Table1\">\n"
    "    <tr>\n"
    "        <td><span class=\"run-type-incremental\">i</span></td>\n"
    "        <td class=\"legend-explanation\">An incremental run.</td>\n"
    "    </tr>\n"
    "</table>\n"
    "</div>\n"
;

const char * const boost::regression::summary_developer_legend =
    "<div class=\"legend\">\n"
    "<table border=\"0\" summary=\"report description\">\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"success legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-success-expected\">OK</td></tr>\n"
    "                </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            All expected tests pass.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected pass legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-success-unexpected\">OK</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            All expected tests pass, and some other tests that were expected to fail \n"
    "            unexpectedly pass as well.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected new fail legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-fail-unexpected-new\">fail</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            There are some failures on the newly added tests/compiler(s).\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unexpected fail legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-fail-unexpected\">broken</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            Tests that the library author expects to pass are currently failing.\n"
    "        </td>\n"
    "    </tr>\n"
    "    <tr>\n"
    "        <td class=\"legend-item\" width=\"50pt\">\n"
    "            <table width=\"100%\" summary=\"unusable legend\">\n"
    "                <tr class=\"summary-row-single\"><td class=\"summary-unusable\">n/a</td></tr>\n"
    "            </table>\n"
    "        </td>\n"
    "        <td class=\"legend-explanation\">\n"
    "            The library author marked it as unusable on particular platform/toolset.\n"
    "        </td>\n"
    "    </tr>\n"
    "</table>\n"
    "<hr/>\n"
    "<table border=\"0\" summary=\"report description\" id=\"Table1\">\n"
    "    <tr>\n"
    "        <td><span class=\"run-type-incremental\">i</span></td>\n"
    "        <td class=\"legend-explanation\">An incremental run.</td>\n"
    "    </tr>\n"
    "</table>\n"
    "</div>\n"
;
